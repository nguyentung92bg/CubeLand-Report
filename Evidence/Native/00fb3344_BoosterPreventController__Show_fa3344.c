/* IL2CPP: BoosterPreventController$$Show
void BoosterPreventController__Show (BoosterPreventController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BoosterPreventController$$Show
   void BoosterPreventController__Show (BoosterPreventController_o* __this, const MethodInfo*
   method); */

void BoosterPreventController__Show_fa3344(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_00fb34c8 + 0xfb335c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb34cc + 0xfb3370));
    *pcVar2 = '\x01';
  }
  BoosterPreventController__SetInput_fa34d4(param_1,1);
  BoosterPreventController__SetPopupVisibility_fa3504(param_1,1);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(**(int **)(_UNK_00fb34d0 + 0xfb33a0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Alpha_2ce7f58(&uStack_38,uVar3,0x3f75c28f,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_38,0x1e,0);
  PrimeTween_Tween__Scale_2ce4a3c
            (&uStack_38,uVar3,0,0x3f4ccccd,0x3f000000,uStack_38,uStack_34,uStack_30,uStack_2c,
             uStack_28,1,0,0,0,0,0);
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc
            (*(int *)(param_1 + 0x24),
             *(uint *)(param_1 + 0x3c) == 1 || (*(uint *)(param_1 + 0x3c) & 0xfffffffe) == 2,0);
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  return;
}

