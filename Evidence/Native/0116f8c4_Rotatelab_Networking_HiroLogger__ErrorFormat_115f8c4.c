/* IL2CPP: Rotatelab.Networking.HiroLogger$$ErrorFormat
void Rotatelab_Networking_HiroLogger__ErrorFormat (Rotatelab_Networking_HiroLogger_o* __this, System_String_o* format, System_Object_array* args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroLogger$$ErrorFormat
   void Rotatelab_Networking_HiroLogger__ErrorFormat (Rotatelab_Networking_HiroLogger_o* __this,
   System_String_o* format, System_Object_array* args, const MethodInfo* method); */

void Rotatelab_Networking_HiroLogger__ErrorFormat_115f8c4
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_0116f928 + 0x116f8dc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116f92c + 0x116f8f0));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0116f930 + 0x116f904) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_035c2744 + 0x35c2630);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c2748 + 0x35c2644),param_3,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c274c + 0x35c2650));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_035c2750 + 0x35c2664);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_035c2754 + 0x35c2680);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c2758 + 0x35c2694));
    *pcVar5 = '\x01';
  }
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar1 = *piVar6;
  }
  piVar6 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_035c275c + 0x35c26d8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x110);
        goto LAB_035c2720;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)thunk_FUN_00efdb38(piVar6,**(int **)(_UNK_035c275c + 0x35c26d8),10);
LAB_035c2720:
  (*(code *)*puVar2)(piVar6,0,param_2,param_3,puVar2[1]);
  return;
}

