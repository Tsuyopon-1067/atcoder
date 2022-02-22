#include <vector>
#include <iostream>

int main() {
  std::vector<int> a = {9, 8, 7, 6};

  auto it = a.begin();
  ++it;++it;  // これでitは a[3] == 7を指す

  // ここが本題
  for (int i = 0; i < 5; ++i) {
    it = a.insert(it, i);
    it++;  // ここでインクリメントしないと同じ位置に挿入し続けてしまう
  }

  // 以下デバッグ出力
  for (int i = 0; i < a.size(); ++i) {
    if (0 < i) std::cout << ", ";  // このidiomは綺麗に間にコンマが入るから好き
    std::cout << a[i];
  }
  std::cout << std::endl;
}
