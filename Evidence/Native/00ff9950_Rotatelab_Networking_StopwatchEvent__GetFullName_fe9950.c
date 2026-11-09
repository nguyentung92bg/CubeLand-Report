/* IL2CPP: Rotatelab.Networking.StopwatchEvent$$GetFullName
System_String_o* Rotatelab_Networking_StopwatchEvent__GetFullName (Rotatelab_Networking_StopwatchEvent_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.StopwatchEvent$$GetFullName
   System_String_o* Rotatelab_Networking_StopwatchEvent__GetFullName
   (Rotatelab_Networking_StopwatchEvent_o* __this, const MethodInfo* method); */

int Rotatelab_Networking_StopwatchEvent__GetFullName_fe9950(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_r4;
  int unaff_r5;
  char *pcVar9;
  int unaff_r6;
  
  pcVar9 = (char *)(_UNK_00ff99b4 + 0xff9964);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff99b8 + 0xff9978));
    *pcVar9 = '\x01';
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    return *(int *)(param_1 + 8);
  }
  iVar7 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  iVar5 = **(int **)(_UNK_00ff99bc + 0xff999c);
  iVar4 = 0;
  iVar3 = unaff_r6;
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 8);
    iVar3 = iVar1;
  }
  iVar2 = iVar5;
  iVar6 = iVar7;
  iVar8 = iVar7;
  if (iVar1 != 0 && iVar4 != 0) {
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 8);
    }
    iVar2 = iVar3;
    if (iVar5 != 0 && iVar1 != 0) {
      if (iVar7 != 0) {
        iVar8 = *(int *)(iVar7 + 8);
      }
      iVar6 = iVar5;
      if (iVar7 != 0 && iVar8 != 0) {
        iVar4 = thunk_FUN_00efe604(iVar1 + iVar4 + iVar8,iVar1,iVar8,0,unaff_r4);
        System_String__FillStringChecked_2a0b34c(iVar4,0,iVar3);
        System_String__FillStringChecked_2a0b34c(iVar4,*(undefined4 *)(iVar3 + 8),iVar5);
        System_String__FillStringChecked_2a0b34c
                  (iVar4,*(int *)(iVar5 + 8) + *(int *)(iVar3 + 8),iVar7);
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
    if (iVar6 != 0) {
      iVar2 = *(int *)(iVar6 + 8);
    }
    if (iVar6 != 0 && iVar2 != 0) {
      iVar3 = thunk_FUN_00efe604(iVar2 + unaff_r6,iVar6,iVar8,0,unaff_r4,unaff_r5);
      System_String__FillStringChecked_2a0b34c(iVar3,0,iVar4);
      System_String__FillStringChecked_2a0b34c(iVar3,unaff_r6,iVar6);
      iVar4 = iVar3;
    }
  }
  else {
    if (iVar6 != 0) {
      iVar2 = *(int *)(iVar6 + 8);
    }
    iVar4 = iVar6;
    if (iVar6 == 0 || iVar2 == 0) {
      iVar4 = **(int **)(*(int *)(*(int *)(_UNK_02a0eec8 + 0x2a0ee70) + 0x48) + 0x5c);
    }
  }
  return iVar4;
}

