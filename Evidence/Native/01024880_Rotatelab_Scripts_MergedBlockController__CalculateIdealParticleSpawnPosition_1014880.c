/* IL2CPP: Rotatelab.Scripts.MergedBlockController$$CalculateIdealParticleSpawnPosition
UnityEngine_Vector3_o Rotatelab_Scripts_MergedBlockController__CalculateIdealParticleSpawnPosition (Rotatelab_Scripts_MergedBlockController_o* __this, System_Collections_Generic_IList_TextMeshPro__o* healthTexts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MergedBlockController$$CalculateIdealParticleSpawnPosition
   UnityEngine_Vector3_o
   Rotatelab_Scripts_MergedBlockController__CalculateIdealParticleSpawnPosition
   (Rotatelab_Scripts_MergedBlockController_o* __this,
   System_Collections_Generic_IList_TextMeshPro__o* healthTexts, const MethodInfo* method); */

void Rotatelab_Scripts_MergedBlockController__CalculateIdealParticleSpawnPosition_1014880
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_0102495c + 0x10248a0);
  cVar1 = *pcVar4;
  if (cVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01024960 + 0x10248b4));
    cVar1 = '\x01';
    *pcVar4 = '\x01';
  }
  iVar2 = Rotatelab_Scripts_MergedBlockController__FindHealthTextNearestToCamera_101af94
                    (cVar1,param_3);
  if (*(int *)(**(int **)(_UNK_01024964 + 0x10248d4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__op_Inequality_36018e4(iVar2,0,0);
  if (iVar3 == 0) {
    iVar2 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  }
  else {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = TMPro_TMP_Text__get_rectTransform_34fc82c(iVar2,0);
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_28,iVar2,0);
  *(undefined4 *)(param_1 + 1) = uStack_20;
  *param_1 = uStack_28;
  return;
}

