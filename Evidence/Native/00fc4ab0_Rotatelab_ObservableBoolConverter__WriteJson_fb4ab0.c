/* IL2CPP: Rotatelab.ObservableBoolConverter$$WriteJson
void Rotatelab_ObservableBoolConverter__WriteJson (Rotatelab_ObservableBoolConverter_o* __this, Newtonsoft_Json_JsonWriter_o* writer, Rotatelab_ObservableBool_o* value, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableBoolConverter$$WriteJson
   void Rotatelab_ObservableBoolConverter__WriteJson (Rotatelab_ObservableBoolConverter_o* __this,
   Newtonsoft_Json_JsonWriter_o* writer, Rotatelab_ObservableBool_o* value,
   Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method); */

void Rotatelab_ObservableBoolConverter__WriteJson_fb4ab0
               (undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 uStack_11;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_ObservableLong__get_Value_fb2b94(param_3);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  bVar3 = (int)uVar4 != 0;
  uStack_11 = (int)-(iVar2 + (uint)bVar3) < 0 != (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)bVar3))
  ;
  uVar1 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_00fc4b30 + 0xfc4af8) + 0x14),&uStack_11);
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Newtonsoft_Json_JsonSerializer__Serialize_2c3d068(param_4,param_2,uVar1,0);
  return;
}

