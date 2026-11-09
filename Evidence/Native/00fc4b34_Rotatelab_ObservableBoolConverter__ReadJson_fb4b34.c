/* IL2CPP: Rotatelab.ObservableBoolConverter$$ReadJson
Rotatelab_ObservableBool_o* Rotatelab_ObservableBoolConverter__ReadJson (Rotatelab_ObservableBoolConverter_o* __this, Newtonsoft_Json_JsonReader_o* reader, System_Type_o* objectType, Rotatelab_ObservableBool_o* instance, bool hasExistingInstance, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableBoolConverter$$ReadJson
   Rotatelab_ObservableBool_o* Rotatelab_ObservableBoolConverter__ReadJson
   (Rotatelab_ObservableBoolConverter_o* __this, Newtonsoft_Json_JsonReader_o* reader,
   System_Type_o* objectType, Rotatelab_ObservableBool_o* instance, bool hasExistingInstance,
   Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method); */

int Rotatelab_ObservableBoolConverter__ReadJson_fb4b34
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
              int param_6)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (char *)(_UNK_00fc4bf4 + 0xfc4b54);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc4bf8 + 0xfc4b68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc4bfc + 0xfc4b74));
    *pcVar1 = '\x01';
  }
  if (param_5 == 0) {
    param_4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fc4c00 + 0xfc4b94));
    Rotatelab_ObservableLong___ctor_fb30c8();
  }
  if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Newtonsoft_Json_JsonSerializer__Deserialize_bool__14aa68c
                    (param_6,param_2,**(undefined4 **)(_UNK_00fc4c04 + 0xfc4bbc));
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_ObservableLong__set_Value_fb2d14(param_4,(int)((ulonglong)uVar2 >> 0x20),(int)uVar2,0);
  return param_4;
}

