/* IL2CPP: Rotatelab.Networking.UI.HiroRewardUIConfiguration$$GetData
Rotatelab_Networking_UI_HiroRewardUIConfiguration_Data_o* Rotatelab_Networking_UI_HiroRewardUIConfiguration__GetData (Rotatelab_Networking_UI_HiroRewardUIConfiguration_o* __this, System_String_o* id, int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Networking.UI.HiroRewardUIConfiguration$$GetData
   Rotatelab_Networking_UI_HiroRewardUIConfiguration_Data_o*
   Rotatelab_Networking_UI_HiroRewardUIConfiguration__GetData
   (Rotatelab_Networking_UI_HiroRewardUIConfiguration_o* __this, System_String_o* id, int32_t type,
   const MethodInfo* method); */

int Rotatelab_Networking_UI_HiroRewardUIConfiguration__GetData_ff0108
              (int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0xc) + 0xc) <= (int)uVar4) {
      piVar1 = (int *)(param_1 + 0x10);
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar3 = (undefined4 *)(*piVar1 + 8);
      *puVar3 = param_2;
      thunk_FUN_00ec5080(puVar3,param_2);
LAB_01000218:
      return *piVar1;
    }
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar2 = *(int *)(iVar2 + uVar4 * 4 + 0x10);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = System_String__op_Equality_2a0975c(*(undefined4 *)(iVar2 + 8),param_2,0);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar2 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar2 = *(int *)(iVar2 + uVar4 * 4 + 0x10);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar2 + 0xc) == param_3) {
        iVar2 = *(int *)(param_1 + 0xc);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar2 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar1 = (int *)(iVar2 + uVar4 * 4 + 0x10);
        goto LAB_01000218;
      }
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

