/* IL2CPP: Rotatelab.Scripts.LevelAttemptInfo$$.ctor
void Rotatelab_Scripts_LevelAttemptInfo___ctor (Rotatelab_Scripts_LevelAttemptInfo_o __this, Rotatelab_SoLevelData_o* level, int32_t catalogVersion, int64_t levelNumber, int64_t roundNumber, bool isRound, System_String_o* levelVariant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelAttemptInfo$$.ctor
   void Rotatelab_Scripts_LevelAttemptInfo___ctor (Rotatelab_Scripts_LevelAttemptInfo_o __this,
   Rotatelab_SoLevelData_o* level, int32_t catalogVersion, int64_t levelNumber, int64_t roundNumber,
   bool isRound, System_String_o* levelVariant, const MethodInfo* method); */

void Rotatelab_Scripts_LevelAttemptInfo___ctor_106a608
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined1 param_9,undefined4 param_10)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  *param_1 = param_2;
  thunk_FUN_00ec5080();
  puVar3 = param_1 + 7;
  *puVar3 = param_10;
  param_1[5] = param_8;
  *(undefined1 *)(param_1 + 6) = param_9;
  param_1[1] = param_3;
  param_1[2] = param_5;
  param_1[3] = param_6;
  param_1[4] = param_7;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar3 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

