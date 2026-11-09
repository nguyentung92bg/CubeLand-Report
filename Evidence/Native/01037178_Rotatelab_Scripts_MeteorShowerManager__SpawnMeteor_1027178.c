/* IL2CPP: Rotatelab.Scripts.MeteorShowerManager$$SpawnMeteor
float Rotatelab_Scripts_MeteorShowerManager__SpawnMeteor (Rotatelab_Scripts_MeteorShowerManager_o* __this, Rotatelab_Scripts_VoxelController_o* target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MeteorShowerManager$$SpawnMeteor
   float Rotatelab_Scripts_MeteorShowerManager__SpawnMeteor
   (Rotatelab_Scripts_MeteorShowerManager_o* __this, Rotatelab_Scripts_VoxelController_o* target,
   const MethodInfo* method); */

void Rotatelab_Scripts_MeteorShowerManager__SpawnMeteor_1027178(int param_1,undefined4 param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_01037284 + 0x1037194);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01037288 + 0x10371a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103728c + 0x10371b4));
    *pcVar2 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Random__Range_35f8b14(0,*(undefined4 *)(iVar4 + 0xc),0);
  if (*(uint *)(iVar4 + 0xc) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar4 = *(int *)(iVar4 + uVar1 * 4 + 0x10);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_24,iVar4,0);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_01037290 + 0x103722c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = UnityEngine_Object__Instantiate_object__14d4b10
                    (uVar3,**(undefined4 **)(_UNK_01037294 + 0x103724c));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_MeteorController__Init_1026220(iVar4,uStack_24,uStack_20,uStack_1c,param_2);
  return;
}

