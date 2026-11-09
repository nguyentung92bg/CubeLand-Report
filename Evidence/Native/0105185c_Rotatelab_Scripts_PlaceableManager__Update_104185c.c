/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$Update
void Rotatelab_Scripts_PlaceableManager__Update (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$Update
   void Rotatelab_Scripts_PlaceableManager__Update (Rotatelab_Scripts_PlaceableManager_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__Update_104185c(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_01051964 + 0x105187c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051968 + 0x1051890));
    *pcVar6 = '\x01';
  }
  fVar2 = (float)UnityEngine_Time__get_time_3610900(0);
  fVar2 = *(float *)(param_1 + 0x60) * -fVar2;
  fVar3 = (float)FUN_01f4f1b4(fVar2);
  fVar2 = fVar2 - fVar3;
  piVar8 = *(int **)(_UNK_0105196c + 0x10518d4);
  iVar7 = *(int *)(param_1 + 100);
  iVar4 = *piVar8;
  iVar5 = *(int *)(iVar4 + 0x74);
  bVar1 = fVar2 < 0.0;
  if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  if (bVar1) {
    fVar2 = _UNK_01051960;
  }
  *(float *)(param_1 + 0x70) = fVar2;
  *(float *)(param_1 + 0x74) = fVar2;
  fVar3 = fVar2;
  if (iVar5 == 0) {
    FUN_00ec3934();
    fVar2 = *(float *)(param_1 + 0x70);
    iVar4 = *piVar8;
    fVar3 = *(float *)(param_1 + 0x74);
  }
  if (iVar7 != 0) {
    UnityEngine_Material__SetVector_35cafd8
              (iVar7,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 8),*(undefined4 *)(param_1 + 0x68),
               *(undefined4 *)(param_1 + 0x6c),fVar2,fVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

