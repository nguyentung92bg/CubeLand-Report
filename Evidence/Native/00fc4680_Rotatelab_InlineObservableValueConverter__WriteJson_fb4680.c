/* IL2CPP: Rotatelab.InlineObservableValueConverter$$WriteJson
void Rotatelab_InlineObservableValueConverter__WriteJson (Rotatelab_InlineObservableValueConverter_o* __this, Newtonsoft_Json_JsonWriter_o* writer, Il2CppObject* value, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.InlineObservableValueConverter$$WriteJson
   void Rotatelab_InlineObservableValueConverter__WriteJson
   (Rotatelab_InlineObservableValueConverter_o* __this, Newtonsoft_Json_JsonWriter_o* writer,
   Il2CppObject* value, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method); */

void Rotatelab_InlineObservableValueConverter__WriteJson_fb4680
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  
  pcVar6 = (char *)(_UNK_00fc4774 + 0xfc469c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc4778 + 0xfc46b0));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(_UNK_00fc477c + 0xfc46c8);
  iVar1 = thunk_FUN_00f00bc8(param_3,*piVar7);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *piVar7;
  piVar7 = (int *)thunk_FUN_00f00bc8(param_3,iVar8);
  iVar1 = *piVar7;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar8) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto LAB_00fc473c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar7,iVar8,0);
LAB_00fc473c:
  uVar3 = (*(code *)*puVar2)(piVar7,puVar2[1]);
  if (param_4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*param_4 + 0x1d0))(param_4,param_2,uVar3,0,*(undefined4 *)(*param_4 + 0x1d4));
  return;
}

