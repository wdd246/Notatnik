object Form1: TForm1
  Left = 262
  Top = 180
  Width = 1305
  Height = 675
  Caption = 'NotAdamTnik'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object tresc: TMemo
    Left = 0
    Top = 0
    Width = 1289
    Height = 616
    Align = alClient
    Color = clBlack
    Font.Charset = ANSI_CHARSET
    Font.Color = clGreen
    Font.Height = -15
    Font.Name = 'Arial Rounded MT Bold'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 0
    OnKeyDown = trescKeyDown
  end
  object MainMenu1: TMainMenu
    Left = 1224
    Top = 8
    object Plik1: TMenuItem
      Caption = '&Plik'
      object Nowy1: TMenuItem
        Caption = '&Nowy ctrl+n'
        OnClick = Nowy1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Otworz1: TMenuItem
        Caption = '&Otworz ctrl+o'
        OnClick = Otworz1Click
      end
      object Zapisz1: TMenuItem
        Caption = 'Zapi&sz ctrl+s'
        OnClick = Zapisz1Click
      end
      object Zapiszjako1: TMenuItem
        Caption = 'Za&pisz jako'
        OnClick = Zapiszjako1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object Zakocz1: TMenuItem
        Caption = '&Zako'#324'cz'
        OnClick = Zakocz1Click
      end
    end
    object Edycja1: TMenuItem
      Caption = '&Edycja'
      object Wytnijctrlx1: TMenuItem
        Caption = 'Wytnij ctrl+&x'
        OnClick = Wytnijctrlx1Click
      end
      object Kopiujctrlc1: TMenuItem
        Caption = 'Kopiuj ctrl+&c'
        OnClick = Kopiujctrlc1Click
      end
      object Wklejctrlv1: TMenuItem
        Caption = 'Wklej ctrl+&v'
        OnClick = Wklejctrlv1Click
      end
    end
    object Formatuj1: TMenuItem
      Caption = '&Formatuj'
      object Zawijaniewieszy1: TMenuItem
        Caption = 'Zawija&nie wieszy'
        Checked = True
        OnClick = Zawijaniewieszy1Click
      end
      object Czcionka1: TMenuItem
        Caption = '&Czcionka'
        OnClick = Czcionka1Click
      end
    end
    object Pomoc1: TMenuItem
      Caption = '&Pomoc'
      object Informacje1: TMenuItem
        Caption = '&Informacje'
        object Oprogramie1: TMenuItem
          Caption = 'O programie'
          OnClick = Oprogramie1Click
        end
        object Autor1: TMenuItem
          Caption = 'Autor'
          OnClick = Autor1Click
        end
      end
    end
  end
  object OpenDialog2: TOpenDialog
    Filter = 'Pliki tekstowe (txt)|*.txt|Wszystkie pliki|*.*'
    Left = 1192
    Top = 8
  end
  object SaveDialog1: TSaveDialog
    Filter = 'Plik tekstowy (txt)|*.txt|Wszystkie pliki|*.*'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 1160
    Top = 8
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 1128
    Top = 8
  end
end
