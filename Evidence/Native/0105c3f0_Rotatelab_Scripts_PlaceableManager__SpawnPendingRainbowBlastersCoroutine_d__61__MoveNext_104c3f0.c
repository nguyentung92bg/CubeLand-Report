/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<SpawnPendingRainbowBlastersCoroutine>d__61$$MoveNext
bool Rotatelab_Scripts_PlaceableManager__SpawnPendingRainbowBlastersCoroutine_d__61__MoveNext (Rotatelab_Scripts_PlaceableManager__SpawnPendingRainbowBlastersCoroutine_d__61_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<SpawnPendingRainbowBlastersCoroutine>d__61$$MoveNext
   bool Rotatelab_Scripts_PlaceableManager__SpawnPendingRainbowBlastersCoroutine_d__61__MoveNext
   (Rotatelab_Scripts_PlaceableManager__SpawnPendingRainbowBlastersCoroutine_d__61_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_Scripts_PlaceableManager__SpawnPendingRainbowBlastersCoroutine_d__61__MoveNext_104c3f0
          (int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_0105c534 + 0x105c404);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c538 + 0x105c418));
    *pcVar3 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      if (iVar4 != 0) goto LAB_0105c49c;
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar1 != 2) {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  do {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar4 + 0x78) < 1) {
      *(undefined4 *)(iVar4 + 0x7c) = 0;
      thunk_FUN_00ec5080((undefined4 *)(iVar4 + 0x7c),0);
      return 0;
    }
    iVar1 = Rotatelab_Scripts_PlaceableManager__TrySpawnRainbowBlasterAtFront_1043544(iVar4);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_0105c53c + 0x105c4f4) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar2 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3e800000,0);
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar2);
      *(undefined4 *)(param_1 + 8) = 2;
      return 1;
    }
    *(int *)(iVar4 + 0x78) = *(int *)(iVar4 + 0x78) + -1;
LAB_0105c49c:
    iVar1 = PrimeTween_Sequence__get_isAlive_2ceece0(iVar4 + 0x80,0);
  } while (iVar1 == 0);
  *(undefined4 *)(param_1 + 0xc) = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
  *(undefined4 *)(param_1 + 8) = 1;
  return 1;
}

