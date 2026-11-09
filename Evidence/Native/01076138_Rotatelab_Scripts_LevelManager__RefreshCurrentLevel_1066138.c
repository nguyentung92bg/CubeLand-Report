/* IL2CPP: Rotatelab.Scripts.LevelManager$$RefreshCurrentLevel
void Rotatelab_Scripts_LevelManager__RefreshCurrentLevel (Rotatelab_Scripts_LevelManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$RefreshCurrentLevel
   void Rotatelab_Scripts_LevelManager__RefreshCurrentLevel (Rotatelab_Scripts_LevelManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_LevelManager__RefreshCurrentLevel_1066138(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar3 = Rotatelab_Scripts_LevelManager__get_CurrentLevelIndex_106645c();
  uVar3 = Rotatelab_Scripts_LevelManager__GetLevelData_106844c(param_1,uVar3,1);
  puVar4 = (undefined4 *)(param_1 + 0x18);
  *puVar4 = uVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

