/* IL2CPP: Rotatelab.Networking.StopwatchEvent$$AddParameter
Rotatelab_Networking_StopwatchEvent_o* Rotatelab_Networking_StopwatchEvent__AddParameter (Rotatelab_Networking_StopwatchEvent_o* __this, System_String_o* name, double value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.StopwatchEvent$$AddParameter
   Rotatelab_Networking_StopwatchEvent_o* Rotatelab_Networking_StopwatchEvent__AddParameter
   (Rotatelab_Networking_StopwatchEvent_o* __this, System_String_o* name, double value, const
   MethodInfo* method); */

int Rotatelab_Networking_StopwatchEvent__AddParameter_fe99c0
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  pcVar5 = (char *)(_UNK_00ff9ad4 + 0xff99e0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff9ad8 + 0xff99f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff9adc + 0xff9a04));
    *pcVar5 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x20);
  uVar1 = Rotatelab_Networking_StopwatchEvent__GetParameterName_fe9bf8(param_1,param_2);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff9ae0 + 0xff9a2c));
  Firebase_Analytics_Parameter___ctor_11dec2c(uVar2,uVar1,param_3,param_4,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(iVar7 + 8);
  uVar6 = *(uint *)(iVar7 + 0xc);
  piVar4 = *(int **)(_UNK_00ff9ae4 + 0xff9a7c);
  *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar6 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar7 + 0xc) = uVar6 + 1;
    puVar3 = (undefined4 *)(iVar8 + uVar6 * 4 + 0x10);
    *puVar3 = uVar2;
    thunk_FUN_00ec5080(puVar3,uVar2);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar7,uVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38));
  }
  return param_1;
}

