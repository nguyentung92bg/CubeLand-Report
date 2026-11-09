/* IL2CPP: Rotatelab.InlineObservableValueConverter$$ReadJson
Il2CppObject* Rotatelab_InlineObservableValueConverter__ReadJson (Rotatelab_InlineObservableValueConverter_o* __this, Newtonsoft_Json_JsonReader_o* reader, System_Type_o* objectType, Il2CppObject* existingInstance, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.InlineObservableValueConverter$$ReadJson
   Il2CppObject* Rotatelab_InlineObservableValueConverter__ReadJson
   (Rotatelab_InlineObservableValueConverter_o* __this, Newtonsoft_Json_JsonReader_o* reader,
   System_Type_o* objectType, Il2CppObject* existingInstance, Newtonsoft_Json_JsonSerializer_o*
   serializer, const MethodInfo* method); */

int * Rotatelab_InlineObservableValueConverter__ReadJson_fb4780
                (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_00fc49c8 + 0xfc47a0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc49cc + 0xfc47b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc49d0 + 0xfc47c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc49d4 + 0xfc47cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc49d8 + 0xfc47d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc49dc + 0xfc47e4));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(_UNK_00fc49e0 + 0xfc47fc);
  uStack_24 = 0;
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue_206b35c
                    (**(int **)(iVar1 + 0x5c),param_3,&uStack_24,
                     **(undefined4 **)(_UNK_00fc49e4 + 0xfc483c));
  if (iVar1 == 0) {
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar7;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar7 = (int *)System_Type__GetProperty_2b8dc20
                              (param_3,**(undefined4 **)(_UNK_00fc49e8 + 0xfc488c),0x34,0);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_24 = (**(code **)(*piVar7 + 0x150))(piVar7,*(undefined4 *)(*piVar7 + 0x154));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item_2069314
              (iVar1,param_3,uStack_24,**(undefined4 **)(_UNK_00fc49ec + 0xfc48e0));
  }
  piVar8 = *(int **)(_UNK_00fc49f0 + 0xfc48fc);
  piVar7 = (int *)thunk_FUN_00f00bc8(param_4,*piVar8);
  if (piVar7 == (int *)0x0) {
    uVar2 = System_Activator__CreateInstance_2b9d7c8(param_3,0);
    piVar7 = (int *)thunk_FUN_00f00bc8(uVar2,*piVar8);
  }
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Newtonsoft_Json_JsonSerializer__Deserialize_2c34488(param_5,param_2,uStack_24,0);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar7;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar8) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
        goto LAB_00fc49a8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(piVar7,*piVar8,1);
LAB_00fc49a8:
  (*(code *)*puVar3)(piVar7,uVar2,puVar3[1]);
  return piVar7;
}

