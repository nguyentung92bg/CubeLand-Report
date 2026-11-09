/* IL2CPP: Rotatelab.Networking.StopwatchEvent$$GetParameterName
System_String_o* Rotatelab_Networking_StopwatchEvent__GetParameterName (Rotatelab_Networking_StopwatchEvent_o* __this, System_String_o* parameterName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.StopwatchEvent$$GetParameterName
   System_String_o* Rotatelab_Networking_StopwatchEvent__GetParameterName
   (Rotatelab_Networking_StopwatchEvent_o* __this, System_String_o* parameterName, const MethodInfo*
   method); */

int Rotatelab_Networking_StopwatchEvent__GetParameterName_fe9bf8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  char *pcVar7;
  int iVar8;
  
  pcVar7 = (char *)(_UNK_00ff9c60 + 0xff9c10);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff9c64 + 0xff9c24));
    *pcVar7 = '\x01';
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    return param_2;
  }
  iVar4 = **(int **)(_UNK_00ff9c68 + 0xff9c4c);
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = 0;
  iVar8 = unaff_r6;
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    iVar8 = iVar1;
  }
  iVar2 = iVar4;
  iVar5 = param_2;
  iVar6 = param_2;
  if (iVar1 != 0 && iVar3 != 0) {
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 8);
    }
    iVar2 = iVar8;
    if (iVar4 != 0 && iVar1 != 0) {
      if (param_2 != 0) {
        iVar6 = *(int *)(param_2 + 8);
      }
      iVar5 = iVar4;
      if (param_2 != 0 && iVar6 != 0) {
        iVar3 = thunk_FUN_00efe604(iVar1 + iVar3 + iVar6,iVar1,iVar6,0,unaff_r4);
        System_String__FillStringChecked_2a0b34c(iVar3,0,iVar8);
        System_String__FillStringChecked_2a0b34c(iVar3,*(undefined4 *)(iVar8 + 8),iVar4);
        System_String__FillStringChecked_2a0b34c
                  (iVar3,*(int *)(iVar4 + 8) + *(int *)(iVar8 + 8),param_2);
        return iVar3;
      }
    }
  }
  iVar3 = unaff_r5;
  iVar8 = unaff_r6;
  if (iVar2 != 0) {
    iVar8 = *(int *)(iVar2 + 8);
    iVar3 = iVar2;
  }
  if (iVar2 != 0 && iVar8 != 0) {
    if (iVar5 != 0) {
      iVar2 = *(int *)(iVar5 + 8);
    }
    if (iVar5 != 0 && iVar2 != 0) {
      iVar1 = thunk_FUN_00efe604(iVar2 + iVar8,iVar5,iVar6,0,unaff_r4,unaff_r5,unaff_r6);
      System_String__FillStringChecked_2a0b34c(iVar1,0,iVar3);
      System_String__FillStringChecked_2a0b34c(iVar1,iVar8,iVar5);
      iVar3 = iVar1;
    }
  }
  else {
    if (iVar5 != 0) {
      iVar2 = *(int *)(iVar5 + 8);
    }
    iVar3 = iVar5;
    if (iVar5 == 0 || iVar2 == 0) {
      iVar3 = **(int **)(*(int *)(*(int *)(_UNK_02a0eec8 + 0x2a0ee70) + 0x48) + 0x5c);
    }
  }
  return iVar3;
}

