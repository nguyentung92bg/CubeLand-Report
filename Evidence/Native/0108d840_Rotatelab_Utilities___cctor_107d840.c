/* IL2CPP: Rotatelab.Utilities$$.cctor
void Rotatelab_Utilities___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Utilities$$.cctor
   void Rotatelab_Utilities___cctor (const MethodInfo* method); */

void Rotatelab_Utilities___cctor_107d840(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  pcVar2 = (char *)(_UNK_0108d9f0 + 0x108d850);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108d9f4 + 0x108d864));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108d9f8 + 0x108d870));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108d9fc + 0x108d87c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108da00 + 0x108d888));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108da04 + 0x108d894));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108da08 + 0x108d8a8));
  System_Text_StringBuilder___ctor_2a14a7c(uVar1,0x1000,0);
  piVar6 = *(int **)(_UNK_0108da0c + 0x108d8cc);
  **(undefined4 **)(*piVar6 + 0x5c) = uVar1;
  thunk_FUN_00ec5080(*(undefined4 *)(*piVar6 + 0x5c),uVar1);
  uVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_0108da10 + 0x108d8f0),5);
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 4) = uVar1;
  thunk_FUN_00ec5080();
  iVar3 = *(int *)(*(int *)(*piVar6 + 0x5c) + 4);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = **(undefined4 **)(_UNK_0108da14 + 0x108d92c);
  if (*(int *)(iVar3 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x10) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x10),uVar1);
  uVar4 = 1;
  iVar3 = 0x14;
  puVar7 = *(undefined4 **)(_UNK_0108da18 + 0x108d960);
  while( true ) {
    iVar5 = *(int *)(*(int *)(*piVar6 + 0x5c) + 4);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar5 + 0xc) <= (int)uVar4) {
      return;
    }
    iVar5 = *(int *)(*(int *)(*piVar6 + 0x5c) + 4);
    uVar1 = System_String__CreateString_2a122fc(0,0x23,uVar4,0);
    uVar1 = System_String__Concat_29fee38(*puVar7,uVar1,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar4) break;
    *(undefined4 *)(iVar5 + iVar3) = uVar1;
    thunk_FUN_00ec5080((undefined4 *)(iVar5 + iVar3),uVar1);
    iVar3 = iVar3 + 4;
    uVar4 = uVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

