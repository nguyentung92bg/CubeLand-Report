/* IL2CPP: Rotatelab.GameExtensions$$UpdateCustomPropertyAsync
System_Threading_Tasks_Task_o* Rotatelab_GameExtensions__UpdateCustomPropertyAsync (Hiro_SatoriSystem_o* satori, System_String_o* key, System_String_o* value, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameExtensions$$UpdateCustomPropertyAsync
   System_Threading_Tasks_Task_o* Rotatelab_GameExtensions__UpdateCustomPropertyAsync
   (Hiro_SatoriSystem_o* satori, System_String_o* key, System_String_o* value,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void Rotatelab_GameExtensions__UpdateCustomPropertyAsync_fb5a1c
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_00fc5af4 + 0xfc5a3c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5af8 + 0xfc5a54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5afc + 0xfc5a60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5b00 + 0xfc5a6c));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fc5b04 + 0xfc5a80));
  System_Collections_Generic_Dictionary_object__object____ctor_20688f4
            (iVar1,**(undefined4 **)(_UNK_00fc5b08 + 0xfc5a94));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_Dictionary_object__object___Add_206933c
            (iVar1,param_2,param_3,**(undefined4 **)(_UNK_00fc5b0c + 0xfc5abc));
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Hiro_SatoriSystem__UpdatePropertiesAsync_296c690(param_1,0,iVar1,1,param_4,0);
  return;
}

