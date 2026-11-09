/* IL2CPP: Rotatelab.Scripts.VoxelController.<>c$$<DestroyViaVacuumBooster>b__12_0
void Rotatelab_Scripts_VoxelController___c___DestroyViaVacuumBooster_b__12_0 (Rotatelab_Scripts_VoxelController___c_o* __this, Rotatelab_Scripts_VoxelController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0106dd18) */
/* WARNING: Removing unreachable block (ram,0x0106dd30) */
/* WARNING: Removing unreachable block (ram,0x0106dd38) */
/* WARNING: Removing unreachable block (ram,0x0106dd58) */
/* WARNING: Removing unreachable block (ram,0x0106dd5c) */
/* WARNING: Removing unreachable block (ram,0x0106dd84) */
/* WARNING: Removing unreachable block (ram,0x0106dd88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.VoxelController.<>c$$<DestroyViaVacuumBooster>b__12_0
   void Rotatelab_Scripts_VoxelController___c___DestroyViaVacuumBooster_b__12_0
   (Rotatelab_Scripts_VoxelController___c_o* __this, Rotatelab_Scripts_VoxelController_o* this,
   const MethodInfo* method); */

void Rotatelab_Scripts_VoxelController___c___DestroyViaVacuumBooster_b__12_0_105e134
               (undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0106e1e0 + 0x106e148);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106e1e4 + 0x106e15c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106e1e8 + 0x106e168));
    *pcVar2 = '\x01';
  }
  Rotatelab_Scripts_BaseTargetableController__PlayDestructionSfx_ff608c(0);
  piVar3 = *(int **)(_UNK_0106e1ec + 0x106e184);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object___Raise_23a2f44
            (iVar1,param_2,**(undefined4 **)(_UNK_0106e1f0 + 0x106e1bc));
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(_UNK_0106ddf0 + 0x106dce8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106ddf4 + 0x106dcfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106ddf8 + 0x106dd08));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_2 + 0x14) == 0x15) {
    Rotatelab_Scripts_VoxelController__CollectGoldenCoin_105de04(param_2);
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_2,0);
  if (iVar1 != 0) {
    UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

