/* IL2CPP: Rotatelab.UI.CreativeSlider$$Bind
void Rotatelab_UI_CreativeSlider__Bind (Rotatelab_UI_CreativeSlider_o* __this, float currentValue, System_Action_float__o* onChanged, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.CreativeSlider$$Bind
   void Rotatelab_UI_CreativeSlider__Bind (Rotatelab_UI_CreativeSlider_o* __this, float
   currentValue, System_Action_float__o* onChanged, const MethodInfo* method); */

void Rotatelab_UI_CreativeSlider__Bind_110ba54(int param_1,float param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 unaff_r5;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  uint in_fpscr;
  float fVar9;
  
  pcVar5 = (char *)(_UNK_0111bbb0 + 0x111ba74);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111bbb4 + 0x111ba88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111bbb8 + 0x111ba94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111bbbc + 0x111baa0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111bbc0 + 0x111baac));
    *pcVar5 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0111bbc4 + 0x111bac0));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 8) = param_3;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 8),param_3);
  *(int *)(iVar1 + 0xc) = param_1;
  thunk_FUN_00ec5080((int *)(iVar1 + 0xc),param_1);
  piVar7 = *(int **)(param_1 + 0x10);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
  (**(code **)(*piVar7 + 0x238))(piVar7,fVar9 * param_2,*(undefined4 *)(*piVar7 + 0x23c));
  Rotatelab_UI_CreativeSlider__OnSliderValueChanged_110ff18(param_1);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0xd0);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0111bbc8 + 0x111bb5c));
  UnityEngine_Events_UnityAction_float____ctor_1c600ac
            (uVar2,iVar1,**(undefined4 **)(_UNK_0111bbcc + 0x111bb7c),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Events_UnityEvent_float___GetDelegate_1c62b00
                    (uVar2,*(undefined4 *)
                            (*(int *)(*(int *)(**(int **)(_UNK_0111bbd0 + 0x111bba0) + 0x10) + 0x60)
                            + 8),**(int **)(_UNK_0111bbd0 + 0x111bba0),uVar2,unaff_r4,unaff_r5,
                     unaff_r11,unaff_lr);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar4 + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_0362a14c + 0x362a0a8);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a150 + 0x362a0bc),uVar2,0);
    *pcVar5 = '\x01';
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(iVar4 + 8);
  uVar6 = *(uint *)(iVar4 + 0xc);
  piVar7 = *(int **)(_UNK_0362a154 + 0x362a0f4);
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar6 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar4 + 0xc) = uVar6 + 1;
    puVar3 = (undefined4 *)(iVar8 + uVar6 * 4 + 0x10);
    *puVar3 = uVar2;
    thunk_FUN_00ec5080(puVar3,uVar2);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar4,uVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
  }
  *(undefined1 *)(iVar1 + 0x14) = 1;
  return;
}

