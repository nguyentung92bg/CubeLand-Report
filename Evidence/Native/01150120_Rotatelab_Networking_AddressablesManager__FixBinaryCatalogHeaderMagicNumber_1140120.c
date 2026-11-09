/* IL2CPP: Rotatelab.Networking.AddressablesManager$$FixBinaryCatalogHeaderMagicNumber
void Rotatelab_Networking_AddressablesManager__FixBinaryCatalogHeaderMagicNumber (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.AddressablesManager$$FixBinaryCatalogHeaderMagicNumber
   void Rotatelab_Networking_AddressablesManager__FixBinaryCatalogHeaderMagicNumber (const
   MethodInfo* method); */

void Rotatelab_Networking_AddressablesManager__FixBinaryCatalogHeaderMagicNumber_1140120(void)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_0115020c + 0x1150134);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01150210 + 0x1150148));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01150214 + 0x1150154));
    *pcVar3 = '\x01';
  }
  iVar5 = *(int *)(_UNK_01150218 + 0x1150168);
  uVar4 = **(undefined4 **)(_UNK_0115021c + 0x1150174);
  if (*(int *)(*(int *)(iVar5 + 0x70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar1 = (int *)System_Type__GetTypeFromHandle_2b80928(uVar4,0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = (**(code **)(*piVar1 + 0x368))
                    (piVar1,**(undefined4 **)(_UNK_01150220 + 0x11501b4),0x28,
                     *(undefined4 *)(*piVar1 + 0x36c));
  uStack_14 = 0xde38942;
  uVar4 = FUN_00ec393c(*(undefined4 *)(iVar5 + 0x24),&uStack_14);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Reflection_FieldInfo__SetValue_2a96164(iVar2,0,uVar4,0);
  return;
}

