/* IL2CPP: Rotatelab.Scripts.ObjectManager$$ApplyLevelStartScale
void Rotatelab_Scripts_ObjectManager__ApplyLevelStartScale (Rotatelab_Scripts_ObjectManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$ApplyLevelStartScale
   void Rotatelab_Scripts_ObjectManager__ApplyLevelStartScale (Rotatelab_Scripts_ObjectManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ObjectManager__ApplyLevelStartScale_102d3a8(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  float fVar7;
  
  fVar7 = *(float *)(param_1 + 0xa0);
  fVar2 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
  fVar3 = _UNK_0103d428;
  fVar7 = fVar7 + fVar2;
  fVar2 = fVar7 / *(float *)(param_1 + 0xa4);
  *(float *)(param_1 + 0xa0) = fVar7;
  bVar1 = fVar2 < 0.0;
  if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  if (bVar1) {
    fVar2 = fVar3;
  }
  fVar3 = (float)DG_Tweening_DOVirtual__EasedValue_1168508
                           (*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac),fVar2,
                            *(undefined4 *)(param_1 + 0xb0),0);
  iVar5 = *(int *)(param_1 + 0x50);
  pcVar6 = (char *)(_UNK_0103d94c + 0x103d8c8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103d950 + 0x103d8dc));
    *pcVar6 = '\x01';
  }
  iVar4 = *(int *)(**(int **)(_UNK_0103d954 + 0x103d8f8) + 0x5c);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar3 = *(float *)(param_1 + 0x54) * fVar3;
  UnityEngine_Transform__set_localScale_36155dc
            (iVar5,*(float *)(iVar4 + 0xc) * fVar3,*(float *)(iVar4 + 0x10) * fVar3,
             *(float *)(iVar4 + 0x14) * fVar3,0);
  return;
}

