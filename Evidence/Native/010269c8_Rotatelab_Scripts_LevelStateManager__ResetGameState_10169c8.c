/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$ResetGameState
void Rotatelab_Scripts_LevelStateManager__ResetGameState (Rotatelab_Scripts_LevelStateManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$ResetGameState
   void Rotatelab_Scripts_LevelStateManager__ResetGameState (Rotatelab_Scripts_LevelStateManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_LevelStateManager__ResetGameState_10169c8(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01026a4c + 0x10269dc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01026a50 + 0x10269f0));
    *pcVar5 = '\x01';
  }
  puVar3 = *(undefined4 **)(_UNK_01026a54 + 0x1026a08);
  *(undefined1 *)(param_1 + 0x10) = 0;
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_CameraManager__TrySetManualRotationAllowed_ffbbd4(iVar4,1,param_1,0);
  Rotatelab_Scripts_LevelStateManager__SetFailSearchState_1016a58(param_1,0);
  iVar4 = *(int *)(param_1 + 0x24);
  if (iVar4 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,iVar4,0);
    *(undefined4 *)(param_1 + 0x24) = 0;
    thunk_FUN_00ec5080((int *)(param_1 + 0x24),0);
  }
  piVar6 = (int *)(param_1 + 0x28);
  if (*piVar6 == 0) {
    return;
  }
  UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,*piVar6,0);
  *(undefined4 *)(param_1 + 0x28) = 0;
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

