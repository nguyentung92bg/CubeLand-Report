/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$OnVoxelDestroyedHandler
void Rotatelab_Scripts_LevelStateManager__OnVoxelDestroyedHandler (Rotatelab_Scripts_LevelStateManager_o* __this, Rotatelab_Scripts_BaseTargetableController_o* targetable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$OnVoxelDestroyedHandler
   void Rotatelab_Scripts_LevelStateManager__OnVoxelDestroyedHandler
   (Rotatelab_Scripts_LevelStateManager_o* __this, Rotatelab_Scripts_BaseTargetableController_o*
   targetable, const MethodInfo* method); */

void Rotatelab_Scripts_LevelStateManager__OnVoxelDestroyedHandler_1017ce8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01027f20 + 0x1027d04);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027f24 + 0x1027d18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027f28 + 0x1027d24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027f2c + 0x1027d30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027f30 + 0x1027d3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027f34 + 0x1027d48));
    *pcVar5 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x14) + -1;
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 < 1) {
    piVar6 = *(int **)(_UNK_01027f38 + 0x1027d70);
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar6;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xc);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction__Raise_fc08b8(iVar1,0);
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x18),0);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_transform_35fe190(param_2,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_position_36149b0(&uStack_30,iVar2,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_position_3614acc(iVar1,uStack_30,uStack_2c,uStack_28,0);
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_ParticleSystem__Play_368e960(*(int *)(param_1 + 0x18),0);
    piVar6 = *(int **)(_UNK_01027f3c + 0x1027e58);
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar6;
    }
    puVar3 = *(undefined4 **)(iVar1 + 0x5c);
    iVar2 = puVar3[3];
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        puVar3 = *(undefined4 **)(*piVar6 + 0x5c);
      }
      uVar4 = *puVar3;
      iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01027f40 + 0x1027ea0));
      System_Action___ctor_2b10bac(iVar2,uVar4,**(undefined4 **)(_UNK_01027f44 + 0x1027ec0),0);
      piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 0xc);
      *piVar6 = iVar2;
      thunk_FUN_00ec5080(piVar6,iVar2);
    }
    if (*(int *)(**(int **)(_UNK_01027f48 + 0x1027ee8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Delay_2ce9f2c(&uStack_30,0x3f000000,iVar2,0,0,0);
  }
  return;
}

