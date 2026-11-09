/* IL2CPP: Rotatelab.Boosters.Booster$$get_IconScreenPosition
UnityEngine_Vector2_o Rotatelab_Boosters_Booster__get_IconScreenPosition (Rotatelab_Boosters_Booster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Booster$$get_IconScreenPosition
   UnityEngine_Vector2_o Rotatelab_Boosters_Booster__get_IconScreenPosition
   (Rotatelab_Boosters_Booster_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_Booster__get_IconScreenPosition_113a1c0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_0114a2c4 + 0x114a1dc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a2c8 + 0x114a1f0));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_UI_Graphic__get_canvas_371b214(*(int *)(param_2 + 0x18),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = UnityEngine_Canvas__get_worldCamera_39a8c88(iVar3,0);
  if (*(int *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_2 + 0x18),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_30,iVar3,0);
  uVar2 = uStack_2c;
  uVar1 = uStack_30;
  if (*(int *)(**(int **)(_UNK_0114a2cc + 0x114a284) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_RectTransformUtility__WorldToScreenPoint_39a6b00
            (&uStack_30,uVar4,uVar1,uVar2,uStack_28,0);
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  return;
}

