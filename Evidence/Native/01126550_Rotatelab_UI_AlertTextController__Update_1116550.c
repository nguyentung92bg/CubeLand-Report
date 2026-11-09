/* IL2CPP: Rotatelab.UI.AlertTextController$$Update
void Rotatelab_UI_AlertTextController__Update (Rotatelab_UI_AlertTextController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.UI.AlertTextController$$Update
   void Rotatelab_UI_AlertTextController__Update (Rotatelab_UI_AlertTextController_o* __this, const
   MethodInfo* method); */

void Rotatelab_UI_AlertTextController__Update_1116550(int param_1)

{
  int iVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((*(char *)(param_1 + 0x28) != '\0') &&
     (iVar1 = UnityEngine_Input__GetMouseButtonDown_368b1a0(0,0), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x28) = 0;
    PrimeTween_Sequence__Stop_2cf07bc((undefined8 *)(param_1 + 0x18),0);
    Rotatelab_UI_AlertTextController__GetHideSequence_1116314(&uStack_20,param_1);
    *(undefined8 *)(param_1 + 0x18) = uStack_20;
    *(undefined8 *)(param_1 + 0x20) = uStack_18;
    thunk_FUN_00ec5080(param_1 + 0x20,0);
  }
  return;
}

