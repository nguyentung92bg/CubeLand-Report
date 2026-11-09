/* IL2CPP: Rotatelab.Boosters.CannonBoosterController$$ExitCannonMode
void Rotatelab_Boosters_CannonBoosterController__ExitCannonMode (Rotatelab_Boosters_CannonBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonBoosterController$$ExitCannonMode
   void Rotatelab_Boosters_CannonBoosterController__ExitCannonMode
   (Rotatelab_Boosters_CannonBoosterController_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_CannonBoosterController__ExitCannonMode_113562c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01145774 + 0x1145640);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01145778 + 0x1145654));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114577c + 0x1145660));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01145780 + 0x114566c));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01145784 + 0x1145680));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01145788 + 0x11456a0));
  Rotatelab_UI_PointerPressEventListener_PointerEvent___ctor_1110d58
            (uVar2,param_1,**(undefined4 **)(_UNK_0114578c + 0x11456c0),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_PointerPressEventListener__remove_OnPointerClick_1110c5c(iVar1,uVar2,0);
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,iVar1,0);
    *(undefined4 *)(param_1 + 0x34) = 0;
    thunk_FUN_00ec5080((int *)(param_1 + 0x34),0);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,iVar1,0);
    *(undefined4 *)(param_1 + 0x38) = 0;
    thunk_FUN_00ec5080((int *)(param_1 + 0x38),0);
  }
  Rotatelab_FX_IDimEffectTarget__StopActiveDimEffect_10fd124(0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Boosters_CannonRig__SlideOut_1134210(*(int *)(param_1 + 0x10),0);
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return;
}

