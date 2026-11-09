/* IL2CPP: Rotatelab.Scripts.WallController$$set_Position
void Rotatelab_Scripts_WallController__set_Position (Rotatelab_Scripts_WallController_o* __this, UnityEngine_Vector3Int_o value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.WallController$$set_Position
   void Rotatelab_Scripts_WallController__set_Position (Rotatelab_Scripts_WallController_o* __this,
   UnityEngine_Vector3Int_o value, const MethodInfo* method); */

void Rotatelab_Scripts_WallController__set_Position_105e2ac
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  *(undefined4 *)(iVar1 + 0x14) = param_3;
  *(undefined4 *)(iVar1 + 0x18) = param_4;
  return;
}

