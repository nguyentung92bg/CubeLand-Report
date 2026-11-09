/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$<Start>b__12_4
void Rotatelab_Currency_UI_CurrencyPanel___Start_b__12_4 (Rotatelab_Currency_UI_CurrencyPanel_o* __this, int64_t __, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$<Start>b__12_4
   void Rotatelab_Currency_UI_CurrencyPanel___Start_b__12_4 (Rotatelab_Currency_UI_CurrencyPanel_o*
   __this, int64_t __, const MethodInfo* method); */

void Rotatelab_Currency_UI_CurrencyPanel___Start_b__12_4_10858fc(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar6;
  undefined4 unaff_r6;
  
  pcVar6 = (char *)(_UNK_0109596c + 0x1095910);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095970 + 0x1095924));
    *pcVar6 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01095974 + 0x1095938));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x10);
  pcVar6 = (char *)(_UNK_010957ac + 0x10956f0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010957b0 + 0x1095704));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010957b4 + 0x1095710));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010957b8 + 0x109571c));
    *pcVar6 = '\x01';
  }
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010957bc + 0x1095730));
  System_Object___ctor_2bb93bc(iVar2,0);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 8) = param_1;
    thunk_FUN_00ec5080((undefined4 *)(iVar2 + 8),param_1);
    puVar1 = *(undefined4 **)(_UNK_010957c0 + 0x1095768);
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    uVar4 = thunk_FUN_00f00cdc(*puVar1);
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar4,iVar2,**(undefined4 **)(_UNK_010957c4 + 0x1095788),0);
    pcVar6 = (char *)(_UNK_01178688 + 0x11785dc);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0117868c + 0x11785f0),uVar4,1,0,unaff_r4,unaff_r5,unaff_r6);
      FUN_00ec37c0(*(undefined4 *)(_UNK_01178690 + 0x11785fc));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01178694 + 0x1178608));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01178698 + 0x1178614));
      *pcVar6 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_0117869c + 0x1178628) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar3 = DG_Tweening_DOTween__Sequence_1167c00();
    uVar3 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar3,0x3dcccccd);
    uVar4 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__15d9e90
                      (uVar3,uVar4,**(undefined4 **)(_UNK_011786a0 + 0x1178650));
    iVar2 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__15da4d0
                      (uVar4,0,1,**(undefined4 **)(_UNK_011786a4 + 0x1178668));
    uVar5 = **(uint **)(_UNK_011786a8 + 0x117867c);
    if (iVar2 != 0) {
      uVar5 = (uint)*(byte *)(iVar2 + 0x94);
    }
    if (iVar2 != 0 && uVar5 != 0) {
      if (*(char *)(iVar2 + 0xa4) == '\0') {
        *(undefined1 *)(iVar2 + 0x5c) = 1;
      }
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

