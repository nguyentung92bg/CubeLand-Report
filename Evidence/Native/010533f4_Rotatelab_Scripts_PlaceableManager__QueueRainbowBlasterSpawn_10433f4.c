/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$QueueRainbowBlasterSpawn
void Rotatelab_Scripts_PlaceableManager__QueueRainbowBlasterSpawn (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$QueueRainbowBlasterSpawn
   void Rotatelab_Scripts_PlaceableManager__QueueRainbowBlasterSpawn
   (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__QueueRainbowBlasterSpawn_10433f4(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_010534a4 + 0x1053408);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010534a8 + 0x105341c));
    *pcVar5 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010534ac + 0x1053430));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_Debugging_CreativeCanvasController__get_RainbowShooterEnabled_110b2fc(iVar3,0);
  if (iVar3 == 0) {
    return;
  }
  piVar6 = (int *)(param_1 + 0x7c);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  if (*piVar6 == 0) {
    uVar4 = Rotatelab_Scripts_PlaceableManager__SpawnPendingRainbowBlastersCoroutine_10434b0
                      (param_1);
    uVar4 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar4,0);
    *(undefined4 *)(param_1 + 0x7c) = uVar4;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar6 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)piVar6 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
  return;
}

