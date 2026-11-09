/* IL2CPP: Rotatelab.Scripts.DockManager$$GetTargetDocksForBlaster
Rotatelab_Scripts_BaseBlasterDockController_array* Rotatelab_Scripts_DockManager__GetTargetDocksForBlaster (Rotatelab_Scripts_DockManager_o* __this, Rotatelab_Scripts_BlasterController_o* blaster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$GetTargetDocksForBlaster
   Rotatelab_Scripts_BaseBlasterDockController_array*
   Rotatelab_Scripts_DockManager__GetTargetDocksForBlaster (Rotatelab_Scripts_DockManager_o* __this,
   Rotatelab_Scripts_BlasterController_o* blaster, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_DockManager__GetTargetDocksForBlaster_1005aa0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar4;
  undefined4 uVar5;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = System_Object__GetType_2bb9c9c(param_2,0);
  pcVar4 = (char *)(_UNK_01016d70 + 0x1016cfc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016d74 + 0x1016d10));
    *pcVar4 = '\x01';
  }
  uVar5 = **(undefined4 **)(_UNK_01016d7c + 0x1016d30);
  if (*(int *)(*(int *)(*(int *)(_UNK_01016d78 + 0x1016d24) + 0x70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar5 = System_Type__GetTypeFromHandle_2b80928(uVar5,0);
  iVar2 = System_Type__op_Equality_2b8b164(uVar1,uVar5,0,extraout_r3,unaff_r4,unaff_r5);
  iVar3 = 0x44;
  if (iVar2 != 0) {
    iVar3 = 0x4c;
  }
  return *(undefined4 *)(param_1 + iVar3);
}

