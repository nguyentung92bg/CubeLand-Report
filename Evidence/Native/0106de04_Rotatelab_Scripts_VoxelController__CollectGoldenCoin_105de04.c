/* IL2CPP: Rotatelab.Scripts.VoxelController$$CollectGoldenCoin
void Rotatelab_Scripts_VoxelController__CollectGoldenCoin (Rotatelab_Scripts_VoxelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.VoxelController$$CollectGoldenCoin
   void Rotatelab_Scripts_VoxelController__CollectGoldenCoin (Rotatelab_Scripts_VoxelController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_VoxelController__CollectGoldenCoin_105de04(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_0106e00c + 0x106de1c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106e010 + 0x106de30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106e014 + 0x106de3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106e018 + 0x106de48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106e01c + 0x106de54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106e020 + 0x106de60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106e024 + 0x106de6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106e028 + 0x106de78));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_0106e02c + 0x106de8c);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  iVar5 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x130);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_28,iVar1,0);
  iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_0106e030 + 0x106deec));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_Vector3__object___Raise_23a56dc
            (iVar5,uStack_28,uStack_24,uStack_20,*(undefined4 *)(iVar1 + 0x34),
             **(undefined4 **)(_UNK_0106e034 + 0x106df24));
  piVar4 = *(int **)(_UNK_0106e038 + 0x106df44);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar5 = puVar2[2];
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar4 + 0x5c);
    }
    uVar6 = *puVar2;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106e03c + 0x106df8c));
    System_Action___ctor_2b10bac(iVar5,uVar6,**(undefined4 **)(_UNK_0106e040 + 0x106dfac),0);
    piVar4 = (int *)(*(int *)(*piVar4 + 0x5c) + 8);
    *piVar4 = iVar5;
    thunk_FUN_00ec5080(piVar4,iVar5);
  }
  if (*(int *)(**(int **)(_UNK_0106e044 + 0x106dfd4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Delay_2ce9f2c(&uStack_28,0x3f400000,iVar5,0,0,0);
  return;
}

