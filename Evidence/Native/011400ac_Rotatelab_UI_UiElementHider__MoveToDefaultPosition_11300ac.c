/* IL2CPP: Rotatelab.UI.UiElementHider$$MoveToDefaultPosition
void Rotatelab_UI_UiElementHider__MoveToDefaultPosition (Rotatelab_UI_UiElementHider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.UI.UiElementHider$$MoveToDefaultPosition
   void Rotatelab_UI_UiElementHider__MoveToDefaultPosition (Rotatelab_UI_UiElementHider_o* __this,
   const MethodInfo* method); */

void Rotatelab_UI_UiElementHider__MoveToDefaultPosition_11300ac(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar3 = *(int *)(param_1 + 0x18);
  iVar1 = Rotatelab_UI_UiElementHider__GetAnchorData_112ff4c();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_18 = *(undefined4 *)(iVar1 + 0x24);
  uStack_14 = *(undefined4 *)(iVar1 + 0x28);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(iRam036236a8 + 0x362362c);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036236ac + 0x3623644),uStack_18,uStack_14,0);
    *pcVar4 = '\x01';
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar3 + 8);
  if (iVar1 != 0) {
    pcVar2 = *(code **)(iRam036236b0 + 0x3623670);
    if (pcVar2 == (code *)0x0) {
      pcVar2 = (code *)thunk_FUN_00ec3774(iRam036236b4 + 0x3623680);
      *(code **)(iRam036236b8 + 0x3623690) = pcVar2;
    }
    (*pcVar2)(iVar1,&uStack_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

