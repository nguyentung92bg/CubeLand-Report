/* IL2CPP: Rotatelab.Networking.HiroLogger$$WarnFormat
void Rotatelab_Networking_HiroLogger__WarnFormat (Rotatelab_Networking_HiroLogger_o* __this, System_String_o* format, System_Object_array* args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroLogger$$WarnFormat
   void Rotatelab_Networking_HiroLogger__WarnFormat (Rotatelab_Networking_HiroLogger_o* __this,
   System_String_o* format, System_Object_array* args, const MethodInfo* method); */

void Rotatelab_Networking_HiroLogger__WarnFormat_115f7ec
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_0116f850 + 0x116f804);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116f854 + 0x116f818));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0116f858 + 0x116f82c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_035c2b30 + 0x35c2a1c);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c2b34 + 0x35c2a30),param_3,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c2b38 + 0x35c2a3c));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_035c2b3c + 0x35c2a50);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_035c2b40 + 0x35c2a6c);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c2b44 + 0x35c2a80));
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
      if (piVar4[-1] == **(int **)(_UNK_035c2b48 + 0x35c2ac4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x110);
        goto LAB_035c2b0c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)thunk_FUN_00efdb38(piVar6,**(int **)(_UNK_035c2b48 + 0x35c2ac4),10);
LAB_035c2b0c:
  (*(code *)*puVar2)(piVar6,2,param_2,param_3,puVar2[1]);
  return;
}

