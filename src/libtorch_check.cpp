#include <torch/torch.h>

int main() {
    // デフォルトのデバイスを取得
    torch::Device device = torch::cuda::is_available() ? torch::kCUDA : torch::kCPU;

    // デフォルトデバイスでテンソルを作成
    torch::Tensor tensor = torch::ones({1, 3, 224, 224}, torch::kFloat).to(device);

    // テンソルを出力して確認
    std::cout << "Tensor on device: " << tensor.device() << std::endl;

    return 0;
}
