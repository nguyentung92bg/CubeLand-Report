/* IL2CPP: Rotatelab.Networking.HiroLogger$$DebugFormat
void Rotatelab_Networking_HiroLogger__DebugFormat (Rotatelab_Networking_HiroLogger_o* __this, System_String_o* format, System_Object_array* args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroLogger$$DebugFormat
   void Rotatelab_Networking_HiroLogger__DebugFormat (Rotatelab_Networking_HiroLogger_o* __this,
   System_String_o* format, System_Object_array* args, const MethodInfo* method); */

void Rotatelab_Networking_HiroLogger__DebugFormat_115f600
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0116f678 + 0x116f61c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116f67c + 0x116f630));
    *pcVar6 = '\x01';
  }
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  if (*(int *)(**(int **)(_UNK_0116f680 + 0x116f650) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar6 = (char *)(_UNK_035c1ffc + 0x35c1ee8);
  if (*pcVar6 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c2000 + 0x35c1efc),param_3,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c2004 + 0x35c1f08));
    *pcVar6 = '\x01';
  }
  piVar5 = *(int **)(_UNK_035c2008 + 0x35c1f1c);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar6 = (char *)(_UNK_035c200c + 0x35c1f38);
  if (*pcVar6 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c2010 + 0x35c1f4c));
    *pcVar6 = '\x01';
  }
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar1 = *piVar5;
  }
  piVar5 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar5;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_035c2014 + 0x35c1f90)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x110);
        goto LAB_035c1fd8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)thunk_FUN_00efdb38(piVar5,**(int **)(_UNK_035c2014 + 0x35c1f90),10);
LAB_035c1fd8:
  (*(code *)*puVar2)(piVar5,3,param_2,param_3,puVar2[1]);
  return;
}

