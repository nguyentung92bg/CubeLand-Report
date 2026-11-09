/* IL2CPP: Rotatelab.Scripts.VoxelController$$DestructionBehaviour
void Rotatelab_Scripts_VoxelController__DestructionBehaviour (Rotatelab_Scripts_VoxelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.VoxelController$$DestructionBehaviour
   void Rotatelab_Scripts_VoxelController__DestructionBehaviour
   (Rotatelab_Scripts_VoxelController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_VoxelController__DestructionBehaviour_105dcc4(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_0106ddf0 + 0x106dce8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106ddf4 + 0x106dcfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106ddf8 + 0x106dd08));
    *pcVar3 = '\x01';
  }
  piVar2 = *(int **)(_UNK_0106ddfc + 0x106dd24);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar2;
  }
  iVar4 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x5c);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_2c,iVar1,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_Vector3__Int32Enum___Raise_23a545c
            (iVar4,uStack_2c,uStack_28,uStack_24,*(undefined4 *)(param_1 + 0x14),
             **(undefined4 **)(_UNK_0106de00 + 0x106dda0));
  if (*(int *)(param_1 + 0x14) == 0x15) {
    Rotatelab_Scripts_VoxelController__CollectGoldenCoin_105de04(param_1);
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 != 0) {
    UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

