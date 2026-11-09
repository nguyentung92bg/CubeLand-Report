/* IL2CPP: Rotatelab.Extensions$$.cctor
void Rotatelab_Extensions___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$.cctor
   void Rotatelab_Extensions___cctor (const MethodInfo* method); */

void Rotatelab_Extensions___cctor_fc3918(void)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_00fd39d0 + 0xfd3928);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd39d4 + 0xfd393c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd39d8 + 0xfd3948));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd39dc + 0xfd3954));
    *pcVar6 = '\x01';
  }
  piVar3 = (int *)thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd39e0 + 0xfd3968));
  System_Globalization_CultureInfo___ctor_2acc098
            (piVar3,**(undefined4 **)(_UNK_00fd39e4 + 0xfd3980),0);
  if (piVar3 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
    piVar3 = *(int **)(_UNK_00fd39e8 + 0xfd39b8);
    **(undefined4 **)(*piVar3 + 0x5c) = uVar4;
    uVar5 = *(uint *)(*piVar3 + 0x5c);
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + (uVar5 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << ((uVar5 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

