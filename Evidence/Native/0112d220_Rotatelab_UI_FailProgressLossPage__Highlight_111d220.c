/* IL2CPP: Rotatelab.UI.FailProgressLossPage$$Highlight
System_String_o* Rotatelab_UI_FailProgressLossPage__Highlight (System_String_o* eventName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailProgressLossPage$$Highlight
   System_String_o* Rotatelab_UI_FailProgressLossPage__Highlight (System_String_o* eventName, const
   MethodInfo* method); */

int Rotatelab_UI_FailProgressLossPage__Highlight_111d220(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_r4;
  int unaff_r5;
  char *pcVar8;
  int unaff_r6;
  
  pcVar8 = (char *)(_UNK_0112d284 + 0x112d234);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d288 + 0x112d248));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d28c + 0x112d254));
    *pcVar8 = '\x01';
  }
  iVar6 = **(int **)(_UNK_0112d290 + 0x112d270);
  iVar1 = **(int **)(_UNK_0112d294 + 0x112d27c);
  iVar4 = 0;
  iVar3 = unaff_r6;
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 8);
    iVar3 = iVar1;
  }
  iVar2 = param_1;
  iVar5 = iVar6;
  iVar7 = iVar6;
  if (iVar1 != 0 && iVar4 != 0) {
    iVar1 = 0;
    if (param_1 != 0) {
      iVar1 = *(int *)(param_1 + 8);
    }
    iVar2 = iVar3;
    if (param_1 != 0 && iVar1 != 0) {
      if (iVar6 != 0) {
        iVar7 = *(int *)(iVar6 + 8);
      }
      iVar5 = param_1;
      if (iVar6 != 0 && iVar7 != 0) {
        iVar4 = thunk_FUN_00efe604(iVar1 + iVar4 + iVar7,iVar1,iVar7,0,unaff_r4);
        System_String__FillStringChecked_2a0b34c(iVar4,0,iVar3);
        System_String__FillStringChecked_2a0b34c(iVar4,*(undefined4 *)(iVar3 + 8),param_1);
        System_String__FillStringChecked_2a0b34c
                  (iVar4,*(int *)(param_1 + 8) + *(int *)(iVar3 + 8),iVar6);
        return iVar4;
      }
    }
  }
  iVar4 = unaff_r5;
  if (iVar2 != 0) {
    unaff_r6 = *(int *)(iVar2 + 8);
    iVar4 = iVar2;
  }
  if (iVar2 != 0 && unaff_r6 != 0) {
    if (iVar5 != 0) {
      iVar2 = *(int *)(iVar5 + 8);
    }
    if (iVar5 != 0 && iVar2 != 0) {
      iVar3 = thunk_FUN_00efe604(iVar2 + unaff_r6,iVar5,iVar7,0,unaff_r4,unaff_r5);
      System_String__FillStringChecked_2a0b34c(iVar3,0,iVar4);
      System_String__FillStringChecked_2a0b34c(iVar3,unaff_r6,iVar5);
      iVar4 = iVar3;
    }
  }
  else {
    if (iVar5 != 0) {
      iVar2 = *(int *)(iVar5 + 8);
    }
    iVar4 = iVar5;
    if (iVar5 == 0 || iVar2 == 0) {
      iVar4 = **(int **)(*(int *)(*(int *)(_UNK_02a0eec8 + 0x2a0ee70) + 0x48) + 0x5c);
    }
  }
  return iVar4;
}

