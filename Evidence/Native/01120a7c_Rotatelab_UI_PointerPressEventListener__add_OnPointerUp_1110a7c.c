/* IL2CPP: Rotatelab.UI.PointerPressEventListener$$add_OnPointerUp
void Rotatelab_UI_PointerPressEventListener__add_OnPointerUp (Rotatelab_UI_PointerPressEventListener_o* __this, Rotatelab_UI_PointerPressEventListener_PointerEvent_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PointerPressEventListener$$add_OnPointerUp
   void Rotatelab_UI_PointerPressEventListener__add_OnPointerUp
   (Rotatelab_UI_PointerPressEventListener_o* __this,
   Rotatelab_UI_PointerPressEventListener_PointerEvent_o* value, const MethodInfo* method); */

void Rotatelab_UI_PointerPressEventListener__add_OnPointerUp_1110a7c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  
  pcVar4 = (char *)(_UNK_01120b10 + 0x1120a94);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01120b14 + 0x1120aa8));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_01120b18 + 0x1120ac0);
  iVar1 = *(int *)(param_1 + 0x14);
  while( true ) {
    piVar2 = (int *)System_Delegate__Combine_2bbca94(iVar1,param_2,0);
    piVar5 = (int *)0x0;
    if ((piVar2 != (int *)0x0) && (piVar5 = piVar2, *piVar2 != *piVar6)) break;
    iVar3 = FUN_00efd180((int *)(param_1 + 0x14),piVar5,iVar1);
    bVar7 = iVar3 == iVar1;
    iVar1 = iVar3;
    if (bVar7) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00ec3e28();
}

