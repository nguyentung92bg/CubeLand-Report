/* IL2CPP: Rotatelab.GameExtensions$$UpdateDefaultPropertyAsync
System_Threading_Tasks_Task_o* Rotatelab_GameExtensions__UpdateDefaultPropertyAsync (Hiro_SatoriSystem_o* satori, System_String_o* key, System_String_o* value, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameExtensions$$UpdateDefaultPropertyAsync
   System_Threading_Tasks_Task_o* Rotatelab_GameExtensions__UpdateDefaultPropertyAsync
   (Hiro_SatoriSystem_o* satori, System_String_o* key, System_String_o* value,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void Rotatelab_GameExtensions__UpdateDefaultPropertyAsync_fa9054
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_00fb912c + 0xfb9074);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb9130 + 0xfb908c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb9134 + 0xfb9098));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb9138 + 0xfb90a4));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fb913c + 0xfb90b8));
  System_Collections_Generic_Dictionary_object__object____ctor_20688f4
            (iVar1,**(undefined4 **)(_UNK_00fb9140 + 0xfb90cc));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_Dictionary_object__object___Add_206933c
            (iVar1,param_2,param_3,**(undefined4 **)(_UNK_00fb9144 + 0xfb90f4));
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Hiro_SatoriSystem__UpdatePropertiesAsync_296c690(param_1,iVar1,0,1,param_4,0);
  return;
}

