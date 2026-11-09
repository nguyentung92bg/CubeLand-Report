/* IL2CPP: Rotatelab.Save.SavedGenericValue<object>$$GetSavedValue
Il2CppObject* Rotatelab_Save_SavedGenericValue_object___GetSavedValue (Rotatelab_Save_SavedGenericValue_T__o* __this, const MethodInfo_1A890E0* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedGenericValue<object>$$GetSavedValue
   Il2CppObject* Rotatelab_Save_SavedGenericValue_object___GetSavedValue
   (Rotatelab_Save_SavedGenericValue_T__o* __this, const MethodInfo_1A890E0* method); */

int Rotatelab_Save_SavedGenericValue_object___GetSavedValue_1a890e0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uStack_14;
  
  pcVar9 = (char *)(_UNK_01a99264 + 0x1a990f8);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01a99268 + 0x1a9910c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01a9926c + 0x1a99118));
    *pcVar9 = '\x01';
  }
  iVar3 = Rotatelab_Save_SaveManager__GetString_10790b0
                    (*(undefined4 *)(param_1 + 8),**(undefined4 **)(_UNK_01a99270 + 0x1a99130),0);
  if ((iVar3 != 0) && (iVar4 = System_String__IsNullOrEmpty_2a0a844(iVar3,0), iVar4 == 0)) {
    if (*(int *)(**(int **)(_UNK_01a99274 + 0x1a99180) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = Newtonsoft_Json_JsonConvert__DeserializeObject_object__14a6fd4
                      (iVar3,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x14));
    return iVar3;
  }
  if (*(char *)(param_1 + 0x24) == '\0') {
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a991c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(iVar3 + 0xc))
                        (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
      return iVar3;
    }
    return *(int *)(param_1 + 0xc);
  }
  iVar3 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x1c);
  puVar5 = *(undefined4 **)(iVar3 + 0x1c);
  if (puVar5 == (undefined4 *)0x0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_013aafac + 0x13aae0c));
    puVar5 = *(undefined4 **)(iVar3 + 0x1c);
    if (puVar5 == (undefined4 *)0x0) {
      FUN_00efd7c4(iVar3);
      puVar5 = *(undefined4 **)(iVar3 + 0x1c);
    }
  }
  uStack_14 = 0;
  uVar7 = *puVar5;
  if (*(int *)(*(int *)(*(int *)(_UNK_013aafb0 + 0x13aae34) + 0x70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar1 = (int *)System_Type__GetTypeFromHandle_2b80928(uVar7,0);
  if (piVar1 != (int *)0x0) {
    uVar6 = (uint)*(byte *)(**(int **)(_UNK_013aafb4 + 0x13aae70) + 0xb8);
    if ((uVar6 <= *(byte *)(*piVar1 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar1 + 100) + uVar6 * 4 + -4) == **(int **)(_UNK_013aafb4 + 0x13aae70))
       ) {
      iVar4 = System_Type__get_HasElementType_2b8c1cc(piVar1,0);
      if (iVar4 != 0) {
        uVar7 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_013aafb8 + 0x13aaf70));
        uVar7 = System_Environment__GetResourceString_2bb93b4(uVar7,0);
        thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_013aafbc + 0x13aaf88));
        uVar2 = thunk_FUN_00f00cdc();
        System_MissingMethodException___ctor_2b71e10(uVar2,uVar7,0);
        func_0x00ec3920(uVar2,iVar3);
                    /* WARNING: Subroutine does not return */
        FUN_00ec3760();
      }
      uStack_14 = 1;
      iVar8 = 0;
      iVar4 = System_RuntimeType__CreateInstanceDefaultCtor_2b9d98c(piVar1,1,1,1,1,&uStack_14,0);
      iVar3 = *(int *)(*(int *)(iVar3 + 0x1c) + 4);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = FUN_00efd768(iVar3);
      }
      if ((iVar4 != 0) && (iVar8 = thunk_FUN_00f00bc8(iVar4,iVar3), iVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(iVar4,iVar3);
      }
      return iVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

