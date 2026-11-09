/* IL2CPP: Rotatelab.Save.SaveManager$$GetDateTime
System_DateTime_o Rotatelab_Save_SaveManager__GetDateTime (System_String_o* key, System_DateTime_o defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SaveManager$$GetDateTime
   System_DateTime_o Rotatelab_Save_SaveManager__GetDateTime (System_String_o* key,
   System_DateTime_o defaultValue, const MethodInfo* method); */

void Rotatelab_Save_SaveManager__GetDateTime_1082e14
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01092f2c + 0x1092e34);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01092f30 + 0x1092e4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01092f34 + 0x1092e58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01092f38 + 0x1092e64));
    *pcVar4 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  iVar1 = UnityEngine_PlayerPrefs__HasKey_35f74c0(param_2,0);
  if (iVar1 != 0) {
    uVar2 = UnityEngine_PlayerPrefs__GetString_35f746c(param_2,0);
    if (*(int *)(**(int **)(_UNK_01092f3c + 0x1092ea8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
    if (*(int *)(**(int **)(_UNK_01092f40 + 0x1092ed4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = System_DateTime__TryParseExact_2b4bb20
                      (uVar2,**(undefined4 **)(_UNK_01092f44 + 0x1092ef8),uVar3,0,&uStack_28,0);
    if (iVar1 != 0) {
      param_4 = uStack_24;
      param_3 = uStack_28;
    }
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  return;
}

