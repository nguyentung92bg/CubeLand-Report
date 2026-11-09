/* IL2CPP: Rotatelab.UI.Toggle$$UpdateToggle
void Rotatelab_UI_Toggle__UpdateToggle (Rotatelab_UI_Toggle_o* __this, bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.Toggle$$UpdateToggle
   void Rotatelab_UI_Toggle__UpdateToggle (Rotatelab_UI_Toggle_o* __this, bool value, const
   MethodInfo* method); */

void Rotatelab_UI_Toggle__UpdateToggle_112c20c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcVar3 = (char *)(_UNK_0113c3f8 + 0x113c22c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113c3fc + 0x113c240));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113c400 + 0x113c24c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113c404 + 0x113c258));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113c408 + 0x113c264));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113c40c + 0x113c270));
    *pcVar3 = '\x01';
  }
  piVar6 = *(int **)(_UNK_0113c410 + 0x113c288);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((undefined8 *)(param_1 + 0x30),0);
  piVar7 = *(int **)(_UNK_0113c414 + 0x113c2bc);
  iVar1 = *piVar7;
  uVar8 = 0x3f800000;
  uVar9 = _UNK_0113c3f4;
  if (param_2 != 0) {
    uVar9 = 0x3f800000;
    uVar8 = _UNK_0113c3f4;
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar4 = puVar2[1];
  if (iVar4 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar5 = *puVar2;
    iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113c418 + 0x113c310));
    System_Action_object__float____ctor_1f19254
              (iVar4,uVar5,**(undefined4 **)(_UNK_0113c41c + 0x113c330),0);
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
    *piVar7 = iVar4;
    thunk_FUN_00ec5080(piVar7,iVar4);
  }
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Custom_object__15d5b3c
            (&uStack_40,param_1,uVar8,uVar9,0x3e4ccccd,iVar4,0,0,0,0,0,1,0,0,0,0,
             **(undefined4 **)(_UNK_0113c420 + 0x113c380));
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x30) = uStack_40;
    *(undefined8 *)(param_1 + 0x38) = uStack_38;
    thunk_FUN_00ec5080(param_1 + 0x38,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

