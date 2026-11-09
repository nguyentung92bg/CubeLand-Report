/* IL2CPP: Rotatelab.Scripts.WallController$$get_Position
UnityEngine_Vector3Int_o Rotatelab_Scripts_WallController__get_Position (Rotatelab_Scripts_WallController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.WallController$$get_Position
   UnityEngine_Vector3Int_o Rotatelab_Scripts_WallController__get_Position
   (Rotatelab_Scripts_WallController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_WallController__get_Position_105e270(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  uVar2 = *(undefined8 *)(iVar1 + 0x10);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(iVar1 + 0x18);
  *param_1 = uVar2;
  return;
}

