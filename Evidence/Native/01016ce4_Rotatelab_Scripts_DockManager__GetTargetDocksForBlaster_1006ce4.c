/* IL2CPP: Rotatelab.Scripts.DockManager$$GetTargetDocksForBlaster
Rotatelab_Scripts_BaseBlasterDockController_array* Rotatelab_Scripts_DockManager__GetTargetDocksForBlaster (Rotatelab_Scripts_DockManager_o* __this, System_Type_o* blasterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$GetTargetDocksForBlaster
   Rotatelab_Scripts_BaseBlasterDockController_array*
   Rotatelab_Scripts_DockManager__GetTargetDocksForBlaster (Rotatelab_Scripts_DockManager_o* __this,
   System_Type_o* blasterType, const MethodInfo* method); */

undefined4
Rotatelab_Scripts_DockManager__GetTargetDocksForBlaster_1006ce4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (char *)(_UNK_01016d70 + 0x1016cfc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01016d74 + 0x1016d10));
    *pcVar3 = '\x01';
  }
  uVar4 = **(undefined4 **)(_UNK_01016d7c + 0x1016d30);
  if (*(int *)(*(int *)(*(int *)(_UNK_01016d78 + 0x1016d24) + 0x70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = System_Type__GetTypeFromHandle_2b80928(uVar4,0);
  iVar1 = System_Type__op_Equality_2b8b164(param_2,uVar4,0);
  iVar2 = 0x44;
  if (iVar1 != 0) {
    iVar2 = 0x4c;
  }
  return *(undefined4 *)(param_1 + iVar2);
}

