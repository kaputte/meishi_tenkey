# meishi_tenkey

RP2040ベースの5x4テンキーキーボード

## 特徴

- RP2040マイコン
- QMKファームウェア対応
- 2レイヤー（テンキー / ナビゲーション）

## レイアウト

```
┌───┬───┬───┬───┐
│NLk│ / │ * │ - │
├───┼───┼───┼───┤
│ 7 │ 8 │ 9 │ + │
├───┼───┼───┼───┤
│ 4 │ 5 │ 6 │ + │
├───┼───┼───┼───┤
│ 1 │ 2 │ 3 │Ent│
├───┼───┼───┼───┤
│ 0 │Fn │ . │Ent│
└───┴───┴───┴───┘
```

## 部品表

| 部品 | 数量 | 備考 |
|------|------|------|
| XIAO RP2040 | 1 | ピンヘッダで取り付け |
| タクトスイッチ | 20 | 薄型（厚さ約1.5mm） |
| ダイオード（1N4148W） | 20 | |

## ファームウェア

`qmk_firmware/meishi_tenkey_default.uf2` をRP2040のブートローダーにドロップ

## KiCad環境

### プラグイン

- [marbastlib](https://github.com/ebastler/marbastlib)
- [Keyboard footprints placer](https://github.com/adamws/kicad-kbplacer)
- [Keyswitch Kicad Library](https://github.com/perigoso/keyswitch-kicad-library)

### 外部ライブラリ

- [Xiao_Kicad_Library](https://github.com/Seeed-Studio/Xiao_Kicad_Library) - シンボル / フットプリント

### PCBエディタ設定

- グリッド: 2.38125mm（キーボード用）

## ライセンス

現在は GPL-2.0 でライセンスされています。

ハードウェア部分（KiCad）については、将来的に CERN-OHL-S へ変更する可能性があります。
