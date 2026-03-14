import { Slot } from 'expo-router';
import { useAuth } from '../hooks/useAuth';
import MainTabs from './(tabs)/_layout';
import { SafeAreaView, StyleSheet } from 'react-native';

export default function RootLayout() {
  const { isLoggedIn } = useAuth();

  return (
    <SafeAreaView style={styles.container}>
      {isLoggedIn ? <MainTabs /> : <Slot />}
    </SafeAreaView>
  );
}

const styles = StyleSheet.create({
  container: { flex: 1 },
});
