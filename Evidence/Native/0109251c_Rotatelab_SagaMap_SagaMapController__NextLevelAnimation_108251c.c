/* IL2CPP: Rotatelab.SagaMap.SagaMapController$$NextLevelAnimation
void Rotatelab_SagaMap_SagaMapController__NextLevelAnimation (Rotatelab_SagaMap_SagaMapController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SagaMap.SagaMapController$$NextLevelAnimation
   void Rotatelab_SagaMap_SagaMapController__NextLevelAnimation
   (Rotatelab_SagaMap_SagaMapController_o* __this, const MethodInfo* method); */

void Rotatelab_SagaMap_SagaMapController__NextLevelAnimation_108251c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_24;
  
  pcVar3 = (char *)(_UNK_01092664 + 0x1092538);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01092668 + 0x109254c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109266c + 0x1092558));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3613500(&uStack_30,*(int *)(param_1 + 0x18),0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                    (*(int *)(param_1 + 0x10),0,**(undefined4 **)(_UNK_01092670 + 0x10925a8));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_rect_3612fd0(&uStack_30,*(int *)(iVar1 + 0x14),0);
  if (*(int *)(**(int **)(_UNK_01092674 + 0x10925ec) + 0x74) == 0) {
    FUN_00ec3934();
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchoredPosition_3613610
            (*(int *)(param_1 + 0x18),uStack_30,fStack_24 + fStack_2c,0);
  uVar2 = Rotatelab_SagaMap_SagaMapController___NextLevelAnimation_g__NextLevelAnim_13_0_1082858
                    (param_1,uStack_30,fStack_24 + fStack_2c,uStack_30,fStack_2c);
  UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar2,0);
  return;
}

