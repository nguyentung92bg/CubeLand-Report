/* IL2CPP: BoosterPreventController$$OnBoosterUsed
void BoosterPreventController__OnBoosterUsed (BoosterPreventController_o* __this, int32_t boosterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BoosterPreventController$$OnBoosterUsed
   void BoosterPreventController__OnBoosterUsed (BoosterPreventController_o* __this, int32_t
   boosterType, const MethodInfo* method); */

void BoosterPreventController__OnBoosterUsed_fa39c8(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 auStack_20 [16];
  
  *(undefined1 *)(param_1 + 0x4c) = 0;
  pcVar2 = (char *)(_UNK_00fb2bf8 + 0xfb2b34);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2bfc + 0xfb2b48));
    *pcVar2 = '\x01';
  }
  BoosterPreventController__SetInput_fa34d4(param_1,0);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(**(int **)(_UNK_00fb2c00 + 0xfb2b6c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Alpha_2ce7f58(auStack_20,uVar3,0,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
  return;
}

