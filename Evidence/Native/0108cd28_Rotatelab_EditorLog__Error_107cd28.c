/* IL2CPP: Rotatelab.EditorLog$$Error
void Rotatelab_EditorLog__Error (Il2CppObject* message, UnityEngine_Object_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.EditorLog$$Error
   void Rotatelab_EditorLog__Error (Il2CppObject* message, UnityEngine_Object_o* context, const
   MethodInfo* method); */

void Rotatelab_EditorLog__Error_107cd28(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_0108cd8c + 0x108cd40);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108cd90 + 0x108cd54));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0108cd94 + 0x108cd68) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_035c25f8 + 0x35c24e4);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c25fc + 0x35c24f8),param_2,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c2600 + 0x35c2504));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_035c2604 + 0x35c2518);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_035c2608 + 0x35c2534);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c260c + 0x35c2548));
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
      if (piVar4[-1] == **(int **)(_UNK_035c2610 + 0x35c258c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xe0);
        goto LAB_035c25d4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)thunk_FUN_00efdb38(piVar6,**(int **)(_UNK_035c2610 + 0x35c258c),4);
LAB_035c25d4:
  (*(code *)*puVar2)(piVar6,0,param_1,param_2,puVar2[1]);
  return;
}

