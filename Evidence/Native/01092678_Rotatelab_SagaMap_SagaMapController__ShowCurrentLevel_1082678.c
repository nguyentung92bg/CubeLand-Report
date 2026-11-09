/* IL2CPP: Rotatelab.SagaMap.SagaMapController$$ShowCurrentLevel
void Rotatelab_SagaMap_SagaMapController__ShowCurrentLevel (Rotatelab_SagaMap_SagaMapController_o* __this, int32_t currentLevelLayoutIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SagaMap.SagaMapController$$ShowCurrentLevel
   void Rotatelab_SagaMap_SagaMapController__ShowCurrentLevel
   (Rotatelab_SagaMap_SagaMapController_o* __this, int32_t currentLevelLayoutIndex, const
   MethodInfo* method); */

void Rotatelab_SagaMap_SagaMapController__ShowCurrentLevel_1082678(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uStack_40;
  float fStack_3c;
  float fStack_34;
  
  pcVar3 = (char *)(_UNK_01092838 + 0x1092698);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109283c + 0x10926ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01092840 + 0x10926b8));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                    (*(int *)(param_1 + 0x10),0,**(undefined4 **)(_UNK_01092844 + 0x10926e0));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_rect_3612fd0(&uStack_40,*(int *)(iVar1 + 0x14),0);
  if (*(int *)(**(int **)(_UNK_01092848 + 0x1092724) + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar4 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3613500(&uStack_40,*(int *)(param_1 + 0x18),0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchoredPosition_3613610
            (*(int *)(param_1 + 0x18),uStack_40,fStack_3c - fStack_34 * fVar4,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x18);
  pcVar3 = (char *)(_UNK_0109284c + 0x10927b8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01092850 + 0x10927cc));
    *pcVar3 = '\x01';
  }
  iVar2 = *(int *)(**(int **)(_UNK_01092854 + 0x10927e4) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar1,*(float *)(iVar2 + 0xc) * _UNK_01092834,*(float *)(iVar2 + 0x10) * _UNK_01092834,
             *(float *)(iVar2 + 0x14) * _UNK_01092834,0);
  return;
}

